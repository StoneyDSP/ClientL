const log = (level, message, module = "global", ctx = "") =>
  {
    if(process.env.NODE_ENV == 'production') {}
    else
    {
      const date = (new Date()).toISOString().slice(0, 19).replace("T", " ")
      console.log(`${date} [${level}] (${module}) ${message} ${ctx}`)
    }
  }

  export default
  {
    error(message, module, ctx) { log("ERROR", message, module, ctx) },
    warn(message, module, ctx)  { log("WARN", message, module, ctx) },
    info(message, module, ctx)  { log("INFO", message, module, ctx) },
    debug(message, module, ctx) { log("DEBUG", message, module, ctx) },
  }
